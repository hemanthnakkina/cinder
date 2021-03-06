..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-storage_nfs:

.. list-table:: Description of NFS storage configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``nfs_mount_attempts`` = ``3``
     - (Integer) The number of attempts to mount NFS shares before raising an error. At least one attempt will be made to mount an NFS share, regardless of the value specified.
   * - ``nfs_mount_options`` = ``None``
     - (String) Mount options passed to the NFS client. See section of the NFS man page for details.
   * - ``nfs_mount_point_base`` = ``$state_path/mnt``
     - (String) Base dir containing mount points for NFS shares.
   * - ``nfs_qcow2_volumes`` = ``False``
     - (Boolean) Create volumes as QCOW2 files rather than raw files.
   * - ``nfs_shares_config`` = ``/etc/cinder/nfs_shares``
     - (String) File with the list of available NFS shares.
   * - ``nfs_snapshot_support`` = ``False``
     - (Boolean) Enable support for snapshots on the NFS driver. Platforms using libvirt <1.2.7 will encounter issues with this feature.
   * - ``nfs_sparsed_volumes`` = ``True``
     - (Boolean) Create volumes as sparsed files which take no space. If set to False volume is created as regular file. In such case volume creation takes a lot of time.
